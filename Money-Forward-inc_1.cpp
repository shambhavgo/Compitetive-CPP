#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int b=1,w=1,firstb=0,firstw=1;
    int i=0;
    while(i<s.size()){
        if(i%2==0){
            if(b!=0){
                if(s[i]=='L'){
                    if(firstb<firstw){
                        firstb=0;
                        b++;
                        firstw++;
                    }
                    else{
                        firstb=0;
                        b=b+w+1;
                        w=0;
                    }
                }
                else{
                    if(firstb<firstw){
                        firstb=0;
                        b=b+w+1;
                        w=0;
                    }
                    else{
                        firstb=firstw+w;
                        b++;
                        firstw=0;
                    }
                }
            }
            else{
                b++;
                firstw=(s[i]=='L'?1:0);
                firstb=(s[i]=='L'?0:firstw+w);
            }
        }
        else{
            if(w!=0){
                if(s[i]=='L'){
                    if(firstb<firstw){
                        firstw=0;
                        w=b+w+1;
                        b=0;
                    }
                    else{
                        firstw=0;
                        w++;
                        firstb++;
                    }
                }
                else{
                    if(firstb<firstw){
                        firstw=firstb+b;
                        w++;
                        firstb=0;
                    }
                    else{
                        firstw=0;
                        w=b+w+1;
                        b=0;
                    }
                }
            }
            else{
                w++;
                firstb=(s[i]=='L'?1:0);
                firstw=(s[i]=='L'?0:firstb+b);
            }
        }
        i++;
    }
    cout<<b<<" "<<w;
    return 0;
}