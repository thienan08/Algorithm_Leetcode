class Solution
{
public:
    vector<bool> result;
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        int maxCandies = 0;
        for (int c : candies)
        {
            if (c > maxCandies)
            {
                maxCandies = c;
            }
        }
        for (int c : candies)
        {
            if (c + extraCandies >= maxCandies)
            {
                result.push_back(true);
            }
            else
            {
                result.push_back(false);
            }
        }
        return result;
    }
};