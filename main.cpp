#include <iostream>

using namespace std;
int count=0;
void swap(char *a, char *b){
char temp = *a;
*a = *b;
*b = temp;
}

void permute(string str, int start){
    int n=str.length()-1;

    if(start == n){
        cout <<"\t\t" << str << endl;
        count++;
    }else{
        for(int i=start;i<= n;i++){
            swap(str[start],str[i]);
            permute(str,start + 1);
        }
    }
}

int main()
{   string name;
    cout << "Enter your name : ";
    cin >> name;
    cout << "Here is all the permutations of your name : " << endl<< endl;
    permute(name,0);
    cout << endl <<"Total permutations of your name is " <<count;
    return 0;
}
