//first
int* divide_and_conquer(int* a){
	int M[4] = {0,0};//M[0]存min，M[1]存max，M[2]存min的位置，M[3]存max的位置
    if(|a|<=2) M = solve(a);
    //将传入的a的数组划分为数量相等或差1的左右两个子集al与ar
    int* SL = divide_and_conquer(al);
    int* SR = divide_and_conquer(ar);
    return merge(SL,SR);//得到的M数组中，M[0]=min，M[1]=max，M[2]与M[3]为温差最大的两天
}
int* solve(int* a){
    int M[2]={0,0}//M[0]存min，M[1]存max
    if (length(a)==1)M[0]=M[1]=a[0];
    else{
        M[0]=min(a);
        M[1]=max(a);//记录最值
        M[2]=loc(min(a));
        M[3]=loc(max(a));//记录最值位置
    }
    return M;
}
int* merge(int*SL,int* SR){
    //比较SL与SR中的信息，使得:
    M[0]=min(SL[0],SR[0]);
    M[1]=max(SL[1],SR[1]);//选出最值
    M[2]=loc(min(SL[2],SR[2]));
    M[3]=loc(max(SL[3],SR[3]));//更改最值位置
    return M;
}

//second
int ActivitiesValue(int l,int r){
    if(l==r) return V[l];
    int u = 0;
    for(int i=l;i<=r;i++){
        if(F[i]<S[i+1]){
            if(ActivitiesValue(l,i)+ActivitiesValue(i+1,r) > u)
            u = ActivitiesValue(l,r)+ActivitiesValue(i+1,r);
            //同时可在驻韩阿叔中设定一个数组，存储取u时的位置信息
        }else{
            u = max(ActivitiesValue(l,i),ActivitiesValue(i+1,r));
        }
    }
    return u;
}

//third
int* temp = W;//存放新的排列，下标大于n时存放新结点Cost
int plan[2][n];
int j = n+1;
while(!temp只有最后一项不为零){
    for(int i=1;i<=j;i++){//每次选择最小的两个值
        if(temp[i]==0) continue;
        min1=最小值;
        min2=次小值;
    }
    //将下标记录在plan对应次数-1中
    temp[j++]=min1+min2;
    //置temp中原始min1,min2对应值为0
}
//最终temp[j]为最小值Cost
//最佳方案为plan，其中temp[x] (x>n) 的部分可由plan的前半部分推出