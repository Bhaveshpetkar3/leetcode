class Solution {
public:
    bool isPowerOfTwo(int n) {
      bool ans= n==0 ? false : (ceil(log2(n)) == floor(log2(n)));
      return ans;
    }
};