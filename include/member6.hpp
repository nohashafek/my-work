#ifndef MEMBER6_HPP
#define MEMBER6_HPP

#endif // MEMBER6_HPP

#include <bits/stdc++.h>
using namespace std;
double get_Current_Time_MS()
{
    clock_t currentTime = clock();
    return ((double) currentTime)/(CLOCKS_PER_SEC/1000);
}

double *getECG( const char *filePath, int &size )
{
    std::ifstream f( filePath );
    std::vector< double > ecg;
    std::string line;
    if( f )
        while( std::getline( f , line ))
            ecg.push_back( std::atof( line.c_str() ));
    else std::cout << "Failed to open file:" << filePath << std::endl;

    double *buffer = new double[ ecg.size() ];
    size = ecg.size();
    for (int i = 0; i < size; ++i) {
        buffer[i] = ecg[i];
    }
    return buffer;
}

struct DoublesQueueNode
{
    double data;
    DoublesQueueNode * next;
};
struct DoublesQueue
{
    DoublesQueueNode * first,*last;
    int size;
};

DoublesQueue * init_queue();
void enqueue( DoublesQueue &queue , double data);
double dequeue(DoublesQueue &queue);
double front(DoublesQueue &queue);
bool isEmpty( DoublesQueue &queue );
int queue_size(DoublesQueue &queue);
void clear( DoublesQueue &queue );
void print_queue(DoublesQueue & queue);


int main(int argc, char **argv) {
    if( argc != 2 )
    {
        std::cout << "Invalid usage!" << std::endl;
        return 1;
    }
    int size = 0;
    double * ecgArray = getECG(argv[1],size);
    DoublesQueue * queue = init_queue();
    for (int i = 0; i < size; ++i) {
        double t = get_Current_Time_MS();
        if (queue_size(*queue) < 3000)
        {
            enqueue(*queue,ecgArray[i]);
            print_queue(*queue);
            while(get_Current_Time_MS()-t <10);
        }
        else
        {
            dequeue(*queue);
            enqueue(*queue,ecgArray[i]);
            print_queue(*queue);
            while(get_Current_Time_MS()-t <10);
        }
    }
    clear(*queue);



    return 0;
}
DoublesQueue* init_queue()
{
    DoublesQueue * queue = new DoublesQueue;
    queue ->size = 0;
    queue ->first = nullptr;
    queue->last = nullptr;
    return  queue;
}
void enqueue( DoublesQueue &queue , double data)
{
    DoublesQueueNode * new_node= new DoublesQueueNode;
    new_node->data = data;
    new_node->next = nullptr;
    if(queue.last == nullptr) {
        queue.last = new_node;
    }
    else{
        queue.last->next = new_node;
    }
    queue.last = new_node;
    queue.size++;
    if(queue.first == nullptr)
        queue.first = queue.last;
}
double dequeue(DoublesQueue &queue)
{
    DoublesQueueNode * dequed_node = queue.first;
    double returnedData = dequed_node->data;
    queue.first = queue.first->next;
    queue.size--;
    delete dequed_node;
    if(queue.first == nullptr)
        queue.last = nullptr;
    return  returnedData;
}
double front(DoublesQueue &queue)
{
    return  queue.first->data;
}
bool isEmpty( DoublesQueue &queue )
{
    return queue.first!= nullptr;
}
int queue_size(DoublesQueue &queue)
{
    return  queue.size;
}
void clear( DoublesQueue &queue )
{
    DoublesQueueNode* currentNode = queue.first;
    while (currentNode!= nullptr)
    {
        DoublesQueueNode* tmp = currentNode;
        currentNode = currentNode->next;
        delete tmp;
    }
    delete &queue;
}
void print_queue(DoublesQueue & queue)
{
    DoublesQueueNode* currentNode = queue.first;
    while (currentNode!= nullptr) {
        printf("%.3f ",currentNode->data);
        currentNode = currentNode->next;
    }
    printf("\n");

}
