#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sumtime(vector<int>*& list ,int index, int max){
    vector<int> squence = list[index];
    if(squence[0] == max ){
        cout << squence[0] << " The end" << endl;
    }
    else {
        if(squence.size()==1){ 
            cout << squence[0] << " ";
            cout << "NULL" <<endl;
        }
        else{
            for(auto i = squence.begin()+1; i!= squence.end(); i++){
                cout << squence[0] << " ";
                sumtime(list, (*i) , max);
                cout << "\n";
            }
        }
    }
}

int main(){
    int test;
    cin >> test;

    for(int i =0; i< test; i++){
        int num_of_build, num_of_squence;
        cin >> num_of_build >> num_of_squence;
        int* build_time = new int [num_of_build];

        for(int j= 0; j<num_of_build; j++){
            cin >> build_time[j];
            
        }
        vector<int>* squence = new vector<int> [num_of_build+1];

        for(int m=0; m<num_of_build; m++){
            squence[m+1].push_back(m+1);
        }

        for(int k=0; k<num_of_squence; k++){
            int index, value;
            cin >> index >> value;
            squence[index].push_back(value);
        }

        for(int w= 0; w<num_of_build+1; w++){
            for(auto iter = squence[w].begin(); iter!=squence[w].end(); iter++){
                cout << *iter << " ";
            }
            cout << "\n";
        }

        cout << "\n";
        sumtime(squence,1,num_of_build);
        //for(int l=0; l<)
        
    }
}