#include "gcd_service.cpp"

int main() {
    int x, y;
    
    cout<<"Enter value for x: ";
    cin>>x;
    
    cout<<"Enter value for y: ";
    cin>>y;
    
    int answer = gcd_fun(x,y);
    
    cout<<"gcd(x,y) = "<<answer<<endl;
}
