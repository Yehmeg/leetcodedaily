class Solution {
public:
    int maxArea(vector<int>& height) {
        int answer=0;
        int n = height.size();
        int l = 0;
        int r = n - 1;

        while (l< r) {

            int area = min(height[l], height[r]) * (r - l);

            answer = max(answer, area);

            if (height[l]<height[r])
                l++;
            else
                r--;
        }        

        return answer;
    }

};

    //     int mxar=0;   
       
    //     int n=height.size();

    //     for (int i =0; i<n;i++){

    //         for ( ;j>i;j--){

    //             int temp=min(height[i],height[j])*(abs(i-j));
    //             mxar=max(temp,mxar);
    //         }        
            
    //     }
    // return mxar;