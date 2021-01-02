#include "pow_service.cpp"

int main() {
    
    int x,y;
    
    cout<<"Enter first number: ";
    cin>>x;
    cout<<"Enter second number: ";
    cin>>y;
    
    int answer = pow_fun(x, y);
    
    cout<<"The answer is: "<<answer<<endl;
    
    return 0;
}
