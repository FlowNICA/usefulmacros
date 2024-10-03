void Tpass(float sqrtSNN, float R)
{
    float mp = 0.938;
    float t_pass = 4*mp*R/sqrt(sqrtSNN*sqrtSNN - 4*mp*mp);
    cout << "Tpass = " << t_pass << " fm/c" << endl;
}