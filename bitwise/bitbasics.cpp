#include<bits/stdc++.h>
using namespace std;


// Setting a bit means that if Kth bit is 0, then set it to 1 and if it is 1 then leave it unchanged.
// Clearing/Unsetting a bit means that if Kth bit is 1, then clear it to 0 and if it is 0 then leave it unchanged.
// Toggling a bit means that if Kth bit is 1, then change it to 0 and if it is 0 then change it to 1.

void sett(int &num , int pos){
    // converting the position bit to 1 
    int mask=(1 << pos);
    // now using 'OR' to set the bit at pos of num
    num |= mask;
}

void unset(int  &num, int pos){
    // converting the position bit to 0 
    int mask = ~(1 << pos);
    // now using 'AND' to set the bit at pos of num
    num &= mask;
}

void toggle(int &num, int pos){
    // converting the position bit to 1
    int mask= 1 << pos;
    // now using 'XOR' to set the bit at pos of num
    num ^= mask;
}

bool checkSet(int num, int pos){
    int mask = (1 << pos);
    return num & mask;
}

// Direct XOR of all numbers from 1 to n
int computeXOR(int n){
    if (n % 4 == 0)
        return n;
    if (n % 4 == 1)
        return 1;
    if (n % 4 == 2)
        return n + 1;
    else
        return 0;
}

bool powerOfTwo(int n){
    if(n>0  && (n & (n-1))==0 ){
        return true;
    }
    return false;
}

int countSetBits(int n) {
        int count=0;
        while(n){
            if(n & 1==1)count++;
            n=n>>1;
        }
        return count;
    }

int rightMostSetBit(int n) {
        int pos=0;
        while(n){
            if(n & 1 ==1){
                return pos;
            }
            n=n>>1;
            pos++;
        }
        return -1;
    }

int main(){
    int num, pos;
    cout<<"enter the num : ";
    cin>>num;
    cout<<"enter the pos : ";
    cin>>pos;

    // sett(num,pos);
    // cout<<"after seting the bit at pos : " <<num<<endl;
    // unset(num,pos);
    // cout<< "after unseting the bit at pos : "<<num<<endl;
    // toggle(num,pos);
    // cout<< "after toggling the bit at pos : "<<num<<endl;

    // bool bit =checkSet(num,pos);
    // cout<<"Checking if the pos is setbit  : "<<bit <<endl;

    // int xorr=computeXOR(num);
    // cout<<"Direct XOR of all numbers from 1 to n  : "<<xorr<<endl;

    // bool ans=powerOfTwo(num);
    // cout<<"num is power of 2 : "<<ans<<endl;

    // int ans1=countSetBits(num);
    // cout<<"no of setbits in num : "<<ans1<<endl;

    // int ans2=rightMostSetBit(num);
    // cout<<"position of the rightmost setBit : "<<ans2<<endl;
    

    // int twos_complement = -num;
    // int ones_complement = ~num;
    // cout << "this is one's complement " <<ones_complement<<endl;
    // cout << "This is two's complement " << twos_complement << endl;
    // cout << "This is also two's complement " << (~num+1) << endl;
    // return 0;

    // rightmost setbit gives a no, not position of a setbit / lowest set bit of a number
    //cout<<"rightmost / lowestsetbit setbit : " <<(num & (-num))<<endl;  // for num=16 is 16 and num=5 is 1 and for num=6 is 2

    // Stripping off the lowest set bit : for 6 is 4 for 5 is 4 for 2 is 0
    // cout<<"Stripping off the lowest set bit : "<<(num & (num-1))<<endl;
}