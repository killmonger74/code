class Solution {
  
public:  
    int lastStoneWeight(vector<int>& v) {
        priority_queue<int>m;
        for(int  i=0;i<v.size();i++)m.push(v[i]);
        while(m.size()>=2){
            int a=m.top();m.pop();
            int b=m.top();m.pop();
            m.push(a-b);
        }
        if(m.size()==0)return 0;
        else return m.top();
    }
};