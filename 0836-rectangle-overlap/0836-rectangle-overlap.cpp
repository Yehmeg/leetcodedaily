class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {

        bool xOverlap = max(rec1[0], rec2[0]) < min(rec1[2], rec2[2]);

        bool yOverlap = max(rec1[1], rec2[1]) < min(rec1[3], rec2[3]);

        return xOverlap && yOverlap;
    }
};