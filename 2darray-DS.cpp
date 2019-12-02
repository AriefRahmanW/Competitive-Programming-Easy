#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    int check = 0;
    int arrhasil[6][6];
    int max;
    int hasil = 0;
    for(int i = 0; i < 6; i++){
        for(int j =0; j < 6; j++){
            if (i < 4 && j < 4){
                hasil = 0;
                hasil += arr[i][j] + arr[i][j+1] + arr[i][j+2];
                hasil += arr[i+1][j+1];
                hasil += arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
                
                if(check == 0){
                    max = hasil;
                }else{
                    if( max < hasil){
                        max = hasil;
                    }
                }
                check++;
            }
        }
    }

    return max;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
