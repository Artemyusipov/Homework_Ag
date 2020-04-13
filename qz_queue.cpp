#include <iostream>
#define SIZE 6
using namespace std;
struct queue{
private:
    int* data;
    bool empty(){
        if (pointerBot == pointerTop) return 1;
        else return 0;
    }
public:
    int pointerTop, pointerBot;
    bool start;
    bool end;
    bool num;
    int size;
    queue(int size = SIZE){
        start = 0;
        num= 0;
        end = 0;
        data = new int[size];
        pointerTop = -1;
        pointerBot = 0;
        size = 0;
    }
    ~queue(){
        delete[] data;
    }
    bool push(int x){
        if (pointerTop == SIZE-1){
            pointerTop = -1;
            end = 1;
        }
        if ((pointerTop+1 == pointerBot) && start != 0 &&num!= 1) return 0;
        else {
            data[++pointerTop] = x;
            start = 1;
            size++;
           num= 0;
        }
    }

    int pop(){
        if ((pointerBot-1 == pointerTop) && end != 1) {
           num= 1;
            return 0;
        }
        else {
            if ((pointerBot == pointerTop) && end != 1)num= 1;
            size--;
            if (pointerBot+1 == SIZE) {
                int tmp = data[pointerBot];
                pointerBot = 0;
                end = 0;
                if ((pointerBot-1 == pointerTop))num= 1;
                return tmp;
            }
            return data[pointerBot++];
        }
    }
    int getSize(){
        return size;
    }
    int front(){
        if (!empty()){
            if (pointerTop != -1) return data[pointerTop];
            else return data[SIZE - 1];
        }
        else return 0;
    }
    int back(){
        if (!empty()){
            if (pointerBot != -1) return data[pointerBot];
            else return 0;
        }
        else return 0;
    }
};
int main(){
    
}
