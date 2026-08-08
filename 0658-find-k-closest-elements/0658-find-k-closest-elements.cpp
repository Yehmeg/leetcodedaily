class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {   

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int lo=0;
    int n= arr.size();
    int hi=n-1; 
    vector<int>ans;
    if(arr[lo]> x){//case1 lower then first
        for(int i=0;i<k;i++){
            ans.push_back(arr[i]);
        }
        sort(ans.begin(),ans.end());
    return ans;
    }
    if(arr[hi]<x){ //case2 greater than last
        for(int i=n-1;i>=n-k;i--){
            ans.push_back(arr[i]);
        }
        sort(ans.begin(),ans.end());
    return ans;
    }
    

    //lower and upper bound 
    int lob=-1;
    int upb=-1;
    //check if present in arr or not
    bool abs_=true;
    

    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            abs_=false;
            lob=mid-1;
            upb=mid+1;
            ans.push_back(arr[mid]);
            break;
        }
        else if(arr[mid]>x){
            hi=mid-1;
        }
        else lo=mid+1;
    }
    // if present


    //if absent
    if(abs_){
        lob=hi;
        upb=lo;
    
    }
    else{
        k--;

    }
    while(k--){
        int val=-1;
        if(upb<n && lob>=0){// inbound
            if(abs(x-arr[lob])==abs(x-arr[upb])){
                val=min(arr[lob],arr[upb]);
                if(arr[lob]==val) lob--;
                else upb++;
                ans.push_back(val);
            }
            else if(abs(x-arr[lob])>abs(x-arr[upb])){
                val=arr[upb];
                upb++;
                ans.push_back(val);
            }
            else if(abs(x-arr[lob])<abs(x-arr[upb])){
                int val=arr[lob];
                lob--;
                ans.push_back(val);
            }
        }
        else if (upb<n){//lower is out of bound
            val=arr[upb];
            upb++;
            ans.push_back(val);

        }
        else if( lob>=0)//upper out of bound
        {   val=arr[lob];
            lob--;
            ans.push_back(val);

        }
        
    }




    sort(ans.begin(),ans.end());
    return ans;
        
    }
};
