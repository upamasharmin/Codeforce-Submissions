#import<bits/stdc++.h>
main(char s){
while(std::cin>>s)if(!strchr("AEIOUYaeiouy",s))std::cout<<'.'<<(char)tolower(s);
}
