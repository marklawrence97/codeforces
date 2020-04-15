#include <iostream>
#include <vector>
#include <string>
#include <map>

struct point
{
    int x, y;
};


int main()
{
    int n, m;

    std::cin >> n >> m;

    std::vector<point> points;

    for (int i = 0; i < n; i++)
    {
        std::string map;
        std::cin >> map;
        for (int j = 0; j < n; j++)
        {
            if (map[j] == '*')
            {
                point p;
                p.x = j + 1;
                p.y = i + 1;
                points.push_back(p);
            }
        }
    }

    std::map<int, int> xs;
    std::map<int, int> ys;

    for (auto i: points)
    {
        try 
        {
            xs[i.x] += 1;
            ys[i.y] += 1;
        } 
        catch (...)
        {
            xs[i.x] = 1;
            ys[i.y] = 1;
        }
    }

    for (auto x: xs)
    {
        if (x.second == 1)
        {
            std::cout << x.first;
        }
    }

    std::cout << " ";

    for (auto y: ys)
    {
        if (y.second == 1)
        {
            std::cout << y.first;
        }
    }
}