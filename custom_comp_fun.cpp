 //if just puts a and b in the order in which they are in array if this function return true the it let them
 //be in that order otherwise it swaps them

bool comp(int a,int b) 
{
    if(a>=b)
    {
        return true;
    }
    else
    {
        return false;
    }
}


//////for priority queues

class Compare
{
public:
    bool operator()(pair<int, pii> a, pair<int, pii> b)
    {
        if (a.ff >= b.ff)
        {
            return false;
        }
        if (a.ff < b.ff)
        {
            return true;
        }
        
    }
};
priority_queue<pair<int, pii>, vector<pair<int, pii>>, Compare> v;
