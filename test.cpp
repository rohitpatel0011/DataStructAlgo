#include<bits/stdc++.h> // Include the standard C++ library header for all other headers.
// #include <iostream.sh>
#include <string.h>
#include <string>
using namespace std;
int minimumOperations(string a, string b) // Function to calculate minimum operations needed to transform string a into string b.
{
    if (a.size() != b.size()) {
             return -1; // Return -1 if the strings cannot be transformed into each other.
    }// Check if the lengths of the input strings a and b are different.
   

    int ans=0; // Initialize a variable to store the count of minimum operations.
    int n=a.length(); // Get the length of string a.

    for(int i=0;i<n/2;i++) // Loop through the first half of the string a.
    {
        unordered_map<char,int>mp; // Create an unordered_map to store character frequencies.

        mp[a[i]]++; // Increment the count of character a[i] in map mp.
        mp[b[i]]++; // Increment the count of character b[i] in map mp.
        mp[a[n-1-i]]++; // Increment the count of character a[n-1-i] in map mp.
        mp[b[n-1-i]]++; // Increment the count of character b[n-1-i] in map mp.

        int sz=mp.size(); // Get the size of the map (number of unique characters).

        if(sz==4) // If all four characters in the pair (a[i], b[i]) and (a[n-1-i], b[n-1-i]) are different.
            ans+=2; // Increment the operation count by 2.

        else if(sz==3){
                 ans+=1+(a[i]==a[n-1-i]); // Increment the operation count by 1 if the characters at the two positions in string a are the same.
        } // If there are three unique characters in the pair.
       

        else if(sz==2) {
              ans+=mp[a[i]]!=2; // Increment the operation count by 1 if the count of character a[i] in the pair is not equal to 2.
        }// If there are only two unique characters in the pair.
          
    }

    if(n%2==1 && a[n/2]!=b[n/2]) // If the strings have odd length and the characters at the middle position are different.
        ans++; // Increment the operation count by 1.

    return ans; // Return the final minimum operation count.
}
int main(){
     
    //  cout<<minimumOperations(23,43)<<endl;
     return 0;
}
