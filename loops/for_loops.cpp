using namespace std;
int main(){
    printf("Enter the no of cups : ");
    int teaCups;
    cin>> teaCups;
    
    for(int i=0; i<=teaCups; i++){
        cout<<"Brewing cup" << i << "of tea" << endl;
    }

return 0;
}