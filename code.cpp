#include<iostream>
using namespace std;
class shape{
    protected:
    int width;
    int height;
    
    public:
    void setwidth(int w){
        width=w;
    }
    void sethight(int h){
        height=h;
    }
};
class Rectangle : public shape{
    public:
    int getArea(){
        return (width*height);
    }
};
int main(){
    Rectangle react;
    react.setwidth(5);
    react.sethight(6);
    cout<<"Total area : "<<react.getArea()<<endl;
    return 0;
}