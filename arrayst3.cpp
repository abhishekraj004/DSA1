// #include<iostream>
// using namespace std;
// const int p=3;
// void waveprint( int m , int n, int *a){
//     // m= row , n= column
//     for(int cl=0; cl<n;cl++){
//         if((cl&1)==0){
//             for(int i=0; i<m;i++){
//                 cout<<a[i][cl]<<" ";
//             }
//         }
//         else{
//             for(int i=m-1;i>0;i++){
//                 cout<<a[i][cl]<<" ";
//             }
//         }
//     }
// }
// void swaveprint(int m, int n,int *a){
    
//     for(int ro=0;ro<m;ro++){
//         if((ro &1==0)){
//             for(int j=0;j<n;j++){
//                 cout<<*(a[ro][j])<<" ";
//             }
//         }
//         else{
//             for(int j=n-1;j>0;j++){
//                 cout<<a[ro][j]<<" ";
//             }
//         }
//     }
// }
// int main(){
//     int m,n;
//     cout<<"take input for the row"<<endl;
//     cin>>m;
//     cout<<"take input for the col"<<endl;
//     cin>>n;
//     int a[m][n];
//     cout<<"take input for the araray"<<endl;
//     for(int i =0; i<m; i++){
//         for(int j=0;j<n;j++){
//             cin>>a[i][j];
//         }
//     }
//     waveprint(m, n, (int *)a);
//     cout<<endl;
//      swaveprint(m, n,(int *) a);
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"take input from the user"<<endl;
//     cin>>n;
//     int a[n];
//     cout<<"take input for the array "<<endl;
//     for(int i =0;i<n;i++){
//         cin>>a[i];
//     }
//     sort(a, a+n);
//     int i=1;int j=0;
//     while(i<n){
//         if(a[j]==a[i]){
//             i++;
//         }
//         else{
//             cout<<a[j]<<" ";
//             j=i;
//            // a[j]=a[i];
//             i++;
//         }
//     }
//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int r, c;
//     cout<<"take r,c"<<endl;
//     cin>>r>>c;
//     int a[3][3] ;
    
//     cout<<"take input for the a"<<endl;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>a[i][j];
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=i;j<3;j++){
//             swap(a[i][j] ,a[j][i]);
//         }
//     }

//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int row, col;
//     cout << "Enter the number of rows and columns: ";
//     cin >> row >> col;

//     vector<vector<int>> matrix(row, vector<int>(col));

//     cout << "Enter the elements of the matrix:\n";
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++) {
//             cin >> matrix[i][j];
//         }
//     }

//     int row_start = 0, row_end = row - 1, col_start = 0, col_end = col - 1;
//     int count = 0;
//     int total_element = row * col ;

//     while (count <total_element) {
//         // print first row
//         for (int i = col_start; i <= col_end && count <= total_element; i++) {
//             cout << matrix[row_start][i] << " ";
//             count++;
//         }
//         row_start++;

//         // print last column
//         for (int i = row_start; i <= row_end && count <= total_element; i++) {
//             cout << matrix[i][col_end] << " ";
//             count++;
//         }
//         col_end--;

//         // print last row
//         for (int i = col_end; i >= col_start && count <= total_element; i--) {
//             cout << matrix[row_end][i] << " ";
//             count++;
//         }
//         row_end--;

//         // print first column
//         for (int i = row_end; i >= row_start && count <= total_element; i--) {
//             cout << matrix[i][col_start] << " ";
//             count++;
//         }
//         col_start++;
//     }

//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"take input ";
//     cin>>n;
//     int i=0;
//     int a=0;
//     int b=1;;
//     int c=0;
//     while(i<n){
//         cout<<c<<" ";
        
//         a=b;
//         b=c;
//         c=a+b;
//         i++;

//     }
    
//     cout<<c;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main (){
//     int n;
//     cin>>n;
//     set<int> t;
//     set<int> p;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     // sort(a,a+n);
//     // for(int i=0;i<n-1;i++){
//     //     if(a[i]==a[i+1]){
//     //         t.insert(a[i]);
//     //     }
//     // }
//     // for(auto itr : t){
//     //     cout<<itr <<" ";
//     // }

//     for(int i=0;i<n;i++){
//         p.insert(a[i]);
//     }
//     for(auto itr : p){
//          cout<<itr <<" ";
//      }
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     string s[n];
//     set<string> p;
//     for(int i =0;i<n;i++){
//         cin>>s[i];
//     }

//     for(int i =0;i<n;i++){
//         p.insert(s[i]);
//     }
    
//     for(auto it: p){
//         cout<<it<<" ";
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     // int n;
//     // cin>>n;
//     string s;
//     cout<<"take input for the string"<<endl;
//     getline(cin,s);
//     set<string> p(begin(s),end(s));
//     // for(int i =0;i<n;i++){
//     //     cin>>s[i];
//     // }

//     // for(int i =0;i<n;i++){
//     //     p.insert(s[i]);
//     // }
    
    
//     for(auto it: p){
//         cout<<it<<" ";
//     }
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
    
//     return 0;
// }





// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int row, col;
//     cout << "Enter the number of rows and columns: ";
//     cin >> row >> col;

//     vector<vector<int>> matrix(row, vector<int>(col));

//     cout << "Enter the elements of the matrix:\n";
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++) {
//             cin >> matrix[i][j];
//         }
//     }

//     int row_start = 0, row_end = row - 1, col_start = 0, col_end = col - 1;
//     int count = 0;
//     int total_element = row * col ;

//     while (count <total_element) {
//         // print first row
//         for (int i = col_start; i <= col_end && count <= total_element; i++) {
//             cout << matrix[row_start][i] << " ";
//             count++;
//         }
//         row_start++;

//         // print last column
//         for (int i = row_start; i <= row_end && count <= total_element; i++) {
//             cout << matrix[i][col_end] << " ";
//             count++;
//         }
//         col_end--;

//         // print last row
//         for (int i = col_end; i >= col_start && count <= total_element; i--) {
//             cout << matrix[row_end][i] << " ";
//             count++;
//         }
//         row_end--;

//         // print first column
//         for (int i = row_end; i >= row_start && count <= total_element; i--) {
//             cout << matrix[i][col_start] << " ";
//             count++;
//         }
//         col_start++;
//     }

//     return 0;
// }



// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         vector<int>ans;
//         int m=matrix.size();  // total row
//         int n=matrix[0].size();  // total col
//         int tle=m*n;          // total no of elements

//         int startrow=0;
//         int endcol=n-1;
//         int endrow=m-1;
//         int startcol=0;
        
//         int count=0;
//         while(count<tle){
//             // print startrow 
//             for(int i= startcol;i<=endcol && count<tle;i++){
//                 ans.push_back(matrix[startrow][i]);
//                 count++;
//             }
//             startrow++;

//             // print endcol
//             for(int i= startrow;i<=endrow && count<tle;i++){
//                 ans.push_back(matrix[i][endcol]);
//                 count++;
//             }
//             endcol--;
            
//             //print endrow
//             for(int i= endcol;i>=startcol && count<tle;i--){
//                 ans.push_back(matrix[endrow][i]);
//                 count++;
//             }
//             endrow--;
//             // print startcol
//             for(int i= endrow;i>=startrow && count<tle; i--){
//                 ans.push_back(matrix[i][startcol]);
//                 count++;
//             }
//             startcol++;
//         }
//         return ans;
//     }
// };


// #include<bits/stdc++.h>
// using namespace std;

// string findlongestword( string s){
//     string word, longestword;
//     int startpos=0;
//     for(int i=0;i<s.size();i++){
//         if(i==s.length() || s[i]==' ' || s[i]=='\n'){
//             string currword= s.substr(startpos,i-startpos);
//             if(currword.length()>longestword.length()){
//                 longestword=currword;
//             }
//             startpos=i+1;
//         }
//     }
//     return longestword;
// }
// int main(){
//     string s;
//     getline(cin,s);
//     cout<<findlongestword(s);

//     return 0;
    
// }

