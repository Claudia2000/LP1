void to_lower(char* S){
    int first=0;
    int second='a';
    int third='A';
    int se_thi=second-third;
    
    while(S[first]!='\0'){
        int fourth=S[first];
        S[first]=fourth-se_thi;
        c++;
    }
}
