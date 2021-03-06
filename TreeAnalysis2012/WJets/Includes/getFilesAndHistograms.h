#ifndef _getFilesAndhistograms_h_
#define _getFilesAndhistograms_h_

#include <iostream>
#include <TH1.h>
#include <TH2.h>
#include <TFile.h>
#include <RooUnfoldResponse.h>
#include <string>
using namespace std;
//bool useUnfoldingFiles = false ;
string getEnergy();
TFile* getFile(string, string, string, string, int JetPtMin = 20, int JetPtMax = 0, bool doFlat = false, bool doVarWidth = false, int doQCD = 0 ,  bool doSSign = false , bool doInvMassCut = false , int MET = 0 , int doBJets = 0 , string closureTest = "", string syst = "0", bool dodR = false,bool useUnfoldingFiles = false );
void getFiles(string, TFile *Files[], string, string, string, int JetPtMin = 20, int JetPtMax = 0, bool doFlat = false ,  bool doVarWidth = false , int doQCD = 0,  bool doSSign = false , bool doInvMassCut = false, int MET = 0  , int doBJets = 0 , bool useUnfoldingFiles = false );
void closeFile(TFile*);
void closeFiles(TFile *Files[]);
void closeFiles(TFile *Files[], int nFiles);
TH1D* getHisto(TFile*, string);
void getHistos(TH1D *histograms[], TFile *Files[], string, bool isDoubleLep = true );
void getResp(RooUnfoldResponse*, TFile*, string);
RooUnfoldResponse* getResp(TFile*, string);
void getResps(RooUnfoldResponse *responses[], TFile *Files[], string);
void getStatistics(string leptonFlavor = "Muons",  int JetPtMin = 30, int JetPtMax = 0,  bool doFlat = false , bool doVarWidth = true, int doQCD = 0 , bool doSSign = false ,  bool doInvMassCut = false , int MET = 0 , int doBjets = 0 );
TH1D* newTH1D(string, string, string, int, double, double);
TH1D* newTH1D(string, string, string, int, double* );
TH2D* newTH2D(string name, string title, int nBinsX, double xLow, double xUp, int nBinsY, double yLow, double yUp);
//TH2D* newTH2D(string name, string title, int nBinsX, double xLow, double xUp, int nBinsY, double *yBins);
TH2D* newTH2D(string name, string title, int nBinsX, double *xBins, int nBinsY, double *yBins);
#endif

