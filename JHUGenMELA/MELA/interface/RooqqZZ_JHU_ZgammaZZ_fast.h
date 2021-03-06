/*****************************************************************************
 * Project: RooFit                                                           *
 *                                                                           *
 * This code was autogenerated by RooClassFactory                            * 
 *****************************************************************************/

#ifndef ROOQQZZ_JHU_ZGAMMAZZ_FAST
#define ROOQQZZ_JHU_ZGAMMAZZ_FAST

#include "RooAbsPdf.h"
#include "RooRealProxy.h"
#include "RooCategoryProxy.h"
#include "RooAbsReal.h"
#include "RooAbsCategory.h"

using namespace TMath;

class RooqqZZ_JHU_ZgammaZZ_fast : public RooAbsPdf {
public:
    RooqqZZ_JHU_ZgammaZZ_fast() {} ; 
    RooqqZZ_JHU_ZgammaZZ_fast(const char *name, const char *title,
               RooAbsReal& _m1j,
               RooAbsReal& _m2j,
               RooAbsReal& _h1j,
               RooAbsReal& _h2j,
               RooAbsReal& _phij,
               RooAbsReal& _hsj,
               RooAbsReal& _Phi1j,
               RooAbsReal& _mZZj,
               RooAbsReal& _upFrac);
    RooqqZZ_JHU_ZgammaZZ_fast(const RooqqZZ_JHU_ZgammaZZ_fast& other, const char* name=0) ;
    virtual TObject* clone(const char* newname) const { return new RooqqZZ_JHU_ZgammaZZ_fast(*this,newname); }
    inline virtual ~RooqqZZ_JHU_ZgammaZZ_fast() { }

    Int_t getAnalyticalIntegral(RooArgSet& allVars, RooArgSet& analVars, const char* rangeName=0) const ;
    Double_t analyticalIntegral(Int_t code, const char* rangeName=0) const ;
    
    Double_t partonicXS(double m1_c, double m2_c, double h1_c, double h2_c, double phi_c, double hs_c, double Phi1_c, double mZZ_c, bool upType, bool flipAxis) const;
    
    Double_t integratePartonicXS_Dh2DphDPh1_1(double m1_c, double m2_c, double h1_c, double h2_c, double phi_c, double hs_c, double Phi1_c, double mZZ_c, bool upType, bool flipAxis) const;
    Double_t integratePartonicXS_Dh1DphDPh1_2(double m1_c, double m2_c, double h1_c, double h2_c, double phi_c, double hs_c, double Phi1_c, double mZZ_c, bool upType, bool flipAxis) const;
    Double_t integratePartonicXS_Dh1Dh2Dph_3(double m1_c, double m2_c, double h1_c, double h2_c, double phi_c, double hs_c, double Phi1_c, double mZZ_c, bool upType, bool flipAxis) const;
    Double_t integratePartonicXS_Dh1Dh2DPh1_4(double m1_c, double m2_c, double h1_c, double h2_c, double phi_c, double hs_c, double Phi1_c, double mZZ_c, bool upType, bool flipAxis) const;
    Double_t integratePartonicXS_Dh1Dh2DphDPh1_5(double m1_c, double m2_c, double h1_c, double h2_c, double phi_c, double hs_c, double Phi1_c, double mZZ_c, bool upType, bool flipAxis) const;
    
protected:
    
    RooRealProxy m1j ;
    RooRealProxy m2j ;
    RooRealProxy h1j ;
    RooRealProxy h2j ;
    RooRealProxy phij ;
    RooRealProxy hsj ;
    RooRealProxy Phi1j ;
    RooRealProxy mZZj ;
    RooRealProxy upFrac ;    
    
    Double_t evaluate() const ;


    
private:
    
//    ClassDef(RooqqZZ_JHU_ZgammaZZ_fast,1) // Your description goes here...
    
};

#endif
