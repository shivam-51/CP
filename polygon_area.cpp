




    double polygonArea(vector<double> X[], vector<double> Y[],ll n) 
                { 
                    // Initialze area 
                    double area = 0.0; 
                  
                    // Calculate value of shoelace formula 
                    int j = n - 1; 
                    for (int i = 0; i < n; i++) 
                    { 
                        area += (X[j] + X[i]) * (Y[j] - Y[i]); 
                        j = i; 
                    } 
                    return abs(area / 2.0); 
                }