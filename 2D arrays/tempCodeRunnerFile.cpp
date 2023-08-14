int n,m;
    std::cout<<"Enter n and m of matrix: ";
    std::cin>>n>>m;

    std::vector<std::vector<int>> vec(n,std::vector<int>(m));
    std::cout<<"Enter matrix elements: ";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            std::cin>>vec[i][j];
        }
    }
    int result = maximumOnesRow(vec);
    std::cout<<"row -> "<<result<<std::endl;
    return 0;