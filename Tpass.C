void Tpass(float sqrtSNN, float R1, float R2)
{
    float mp = 0.938;
    float t_pass = 2*mp*(R1+R2)/sqrt(sqrtSNN*sqrtSNN - 4*mp*mp);
    cout << "Tpass = " << t_pass << " fm/c" << endl;
}
