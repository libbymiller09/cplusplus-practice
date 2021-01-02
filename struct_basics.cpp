#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct sports{
    string sport_name;
    string sport_mvp_name;
    int sport_ranking;
};

void populate_single_sport(sports &s) {
    cout<<"Enter sport name: ";
    cin>>s.sport_name;
    
    cout<<"Enter sport mvp name: ";
    cin>>s.sport_mvp_name;
    
    cout<<"Enter sport ranking: ";
    cin>>s.sport_ranking;
    
}

sports populate_single_sport_return(sports s) {
    cout<<"Enter sport name: ";
    cin>>s.sport_name;
    
    cout<<"Enter sport mvp name: ";
    cin>>s.sport_mvp_name;
    
    cout<<"Enter sport ranking: ";
    cin>>s.sport_ranking;
    
    return s;
}

int main() {
    
    sports single_sport;
    
    populate_single_sport(single_sport);
    cout<<setw(25)<<setfill('*')<<""<<endl;

    single_sport = populate_single_sport_return(single_sport);
    
    cout<<setw(25)<<setfill('*')<<""<<endl;
    cout<<"Single Sport Entry: "<<endl;
    cout<<"Sport Name: "<<single_sport.sport_name<<endl;
    cout<<"Sport MVP: "<<single_sport.sport_mvp_name<<endl;
    cout<<"Sport Ranking: "<<single_sport.sport_ranking<<endl;
    cout<<setw(25)<<setfill('*')<<""<<endl;
    
    return 0;
}
