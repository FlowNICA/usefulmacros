void EkinToCM(float Ekin)
{
  float mp=0.938;
  float El=Ekin+mp;
  float pl=sqrt(El*El-mp*mp);
  float pc=sqrt( ( mp*El-mp*mp )/2 );
  float e_cm=sqrt( pc*pc + mp*mp );
  float ss = sqrt( 4*(pc*pc + mp*mp) );
  float yBeam = 0.25 * log ((El + pl) / (El - pl));
  float beta = tanh(yBeam);
  float gamma = cosh(yBeam);
  float gammabeta = sinh(yBeam);
  cout << "Elab = " << El << endl;
  cout << "Plab = " << pl << endl;
  cout << "P* = " << pc << endl;
  cout << "E* = " << e_cm << endl;
  cout << "sqrt(Snn) = " << ss << endl;
  cout << "yBeam = " << yBeam << endl;
  cout << "Beta = " << beta << endl;
  cout << "Gamma = " << gamma << endl;
  cout << "Gamma * Beta = " << gammabeta << endl;
}
