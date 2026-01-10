struct Item {
    int value;
    int weight;
};

class Solution {
    static bool comp(Item a, Item b) {
        double r1 = (double)a.value / (double)a.weight;
        double r2 = (double)b.value / (double)b.weight;
        return r1 > r2;
    }

public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        int n = val.size();
        vector<Item> items(n);

        for (int i = 0; i < n; i++) {
            items[i] = {val[i], wt[i]};
        }

        sort(items.begin(), items.end(), comp);

        int curWeight = 0;
        double finalvalue = 0.0;

        for (int i = 0; i < n; i++) {
            if (curWeight + items[i].weight <= capacity) {
                curWeight += items[i].weight;
                finalvalue += items[i].value;
            } else {
                int remain = capacity - curWeight;
                finalvalue += ((double)items[i].value / (double)items[i].weight) * (double)remain;
                break;
            }
        }

        return finalvalue;
    }
};
