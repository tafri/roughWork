/*
   This code tells if Child string or its Anagram,
   can be made or not from Parent string.
   String will be checked only for A-Z, a-z, 0-9.
*/

#include<iostream>
#include<cstring>
using namespace std;

bool check(int parentCharsCount[], string child){

  int childCharsCount[36];
  for( int i=0; i<36; i++)
    childCharsCount[i] = 0;
  
  for( int i=0; i<child.length(); i++){
    int childInt = int(child[i]);
    if (childInt >=48 && childInt < 58)
      childCharsCount[(childInt - 48)]++ ;
    
    if (childInt >=65 && childInt < 91)
      childCharsCount[(childInt - 65)+10]++ ;
    
    if (childInt >=97 && childInt < 123)
      childCharsCount[(childInt - 97)+10]++ ;
  }
  
  for( int i=0; i<36; i++)
    if (childCharsCount[i] > parentCharsCount[i])
      return false;
  
  return true;
}

int main(){
  string parent, child;
  cout<<"Input parent string: ";  getline(cin, parent);
  cout<<"Input child string: ";   getline(cin, child);
  
  int parentCharsCount[36];
  for( int i=0; i<36; i++)
    parentCharsCount[i] = 0;
      
  for( int i=0; i<parent.length(); i++){
    int parentInt = int(parent[i]);
    if (parentInt >=48 && parentInt < 58){
      parentCharsCount[(parentInt - 48)]++ ;
    }
    if (parentInt >=65 && parentInt < 91){
      parentCharsCount[(parentInt - 65)+10]++ ;
    }
    if (parentInt >=97 && parentInt < 123){
      parentCharsCount[(parentInt - 97)+10]++ ;
    }
  }
  
  if (check(parentCharsCount, child))
    cout<<"Child string or its Anagram can be made from parent string."<<endl;
  else
    cout<<"Child string or its Anagram can not be made from parent string."<<endl;

  return 0;
}
