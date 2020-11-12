int lengthOfLIS(vector<int>& nums) {
    //tailV[i]: the smallest tail of all increasing subsequence of lengh i+1
	vector<int> tailV;   
	for (auto val : nums) {
		auto it = lower_bound(tailV.begin(), tailV.end(), val);
		if (it == tailV.end()) 
		    //Suppose tailV.size()=n, n>0 for simplicity 
			//val is larger than tailV[n-1], the tail of a n-length subsequence
		    //we get a (n+1)-length subsequnce, and tailV[n]=val
			tailV.push_back(val);
		else 
		    //Suppose the iterator is at tailV[i], i>0 for simplicity
			//val is larger than tailV[i-1] and no larger than tailV[i]
			//we get a smaller tail among all (i+1)-length increasing subsequences
			*it = val;
	}
	return tailV.size();
}
