
constexpr double M_NUCL = 0.938;

int CMToLab(double sNN = 4.5) {

    double sN = sNN/2.;
    double pN = TMath::Sqrt(sN*sN - M_NUCL*M_NUCL);

    TLorentzVector tMom4(0, 0, -pN, sN);
    TVector3 vBoost{tMom4.BoostVector()};

    TLorentzVector pMom4(0, 0, pN, sN);
    pMom4.Boost(-vBoost);
    float yBeam = 0.25 * log ((pMom4.E() + pMom4.Pz()) / (pMom4.E() - pMom4.Pz()));
    float beta = tanh(yBeam);
    float gamma = cosh(yBeam);
    float gammabeta = sinh(yBeam);

    cout << "E_lab = " << pMom4.E() << "A GeV" << endl;
    cout << "T_kin = " << pMom4.E() - pMom4.M() << "A GeV" << endl;
    cout << "p_lab = " << pMom4.Pz() << "A GeV/c" << endl;
    cout << "yBeam = " << yBeam << endl;
    cout << "Beta = " << beta << endl;
    cout << "Gamma = " << gamma << endl;
    cout << "Gamma * Beta = " << gammabeta << endl;
    

    return 0;
}
