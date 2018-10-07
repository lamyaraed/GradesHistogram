#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int n, y;
    int num=0;
    int MaxValue=0;
    vector <int> grades;
    cout << "this program calculates a histogram for your students grades"<<endl;
    cout << "please write your students grades" << endl;
    do {
        for (int i=0; i <= num ; i++){
                cin >> n;
                if (n != -1){
                        grades.push_back(n);
                        num = num+1;
                }
        }

    }while ( n != -1);
    y = grades.size();
    cout << "your vector contains ";
    for (int i=0 ; i < y ; i++){
            cout << grades[i] << " ";
            if (grades[i]>MaxValue){
                MaxValue = grades[i];
            }
    }

    cout << endl;
    cout << "the maximum grade is " << MaxValue << endl;
    int arr[y]{};
    for (int j=0; j<y ; j++){
        if (arr[j]==0)
        {
            int counter = 0;
            for (int k = j; k<y; k++)
            {
                if (grades[k]==grades[j])
                {
                    counter+=1;
                    arr[k]=1;
                }
            }
            cout << "number of "<< grades[j] << "'s is " << counter << endl;
        }

    }
    return 0;

}
