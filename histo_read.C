{
  TFile *f1 = TFile::Open("FullSpectrum8TeV_NewUnf_4thAug2014.root");
  
  Int_t Nbins1 = Spectrum8TeV_YBin1.GetNbinsX();
  Int_t Nbins2 = Spectrum8TeV_YBin2.GetNbinsX();
  Int_t Nbins3 = Spectrum8TeV_YBin3.GetNbinsX();
  Int_t Nbins4 = Spectrum8TeV_YBin4.GetNbinsX();
  Int_t Nbins5 = Spectrum8TeV_YBin5.GetNbinsX();
  Int_t Nbins6 = Spectrum8TeV_YBin6.GetNbinsX();
  
  //Float_t *sigma1 = new Float_t[Nbins];
  ofstream out,xsecy2;
  out.open("xsections.txt");
  xsecy2.open("xsections_y2.txt");
  const double x[6][50]= {

 {74,84,97,114,133,153,174,196,220,245,272,300,330,362,395,430,468,507,548,592,638,686,737,790,846,905,967,1032,1101,1172,1248,1327,1410,1497,1588,1784,2116,2500},

 {74,84,97,114,133,153,174,196,220,245,272,300,330,362,395,430,468,507,548,592,638,686,737,790,846,905,967,1032,1101,1172,1248,1327,1410,1497,1588,1784,2116,2500},

 {74,84,97,114,133,153,174,196,220,245,272,300,330,362,395,430,468,507,548,592,638,686,737,790,846,905,967,1032,1101,1172,1248,1327,1410,1497,1588,1784,2116},

 {74,84,97,114,133,153,174,196,220,245,272,300,330,362,395,430,468,507,548,592,638,686,737,790,846,905,967,1032,1101,1172,1248,1327,1410},

 {74,84,97,114,133,153,174,196,220,245,272,300,330,362,395,430,468,507,548,592,638,686,737,790,846,905},

 {74,84,97,114,133,153,174,196,220,245,272,300,330,362,395,430,468,507,548}


  };

  //out << "ylow     yhigh      ptlow     pthigh      sigma" << endl; 
  for (int i=0; i < Nbins1; i++)
        out << "0    0.5  " <<  x[0][i] << "    "  << x[0][i+1] << "    " << Spectrum8TeV_YBin1.GetBinContent(i+1) <<  endl;

  
  for (int i=0; i < Nbins2; i++)
        xsecy2 << "0.5    1  " <<  x[1][i] << "    "  << x[1][i+1] << "    " << Spectrum8TeV_YBin2.GetBinContent(i+1) << endl;
  
  /*
  for (int i=0; i < Nbins3; i++)
        out << "1    1.5  " <<  x[2][i] << "    "  << x[2][i+1] << "    " << Spectrum8TeV_YBin3.GetBinContent(i) << "     " << Spectrum8TeV_YBin3.GetBinError(i) <<  endl;
 

  for (int i=0; i < Nbins4; i++)
        out << "1.5    2  " <<  x[3][i] << "    "  << x[3][i+1] << "    " << Spectrum8TeV_YBin4.GetBinContent(i) <<  "     " << Spectrum8TeV_YBin1.GetBinError(i) <<  endl;


  for (int i=0; i < Nbins5; i++)
        out << "2    2.5  " <<  x[4][i] << "    "  << x[4][i+1] << "    "  << Spectrum8TeV_YBin5.GetBinContent(i) << "     " << Spectrum8TeV_YBin1.GetBinError(i) <<  endl;


 for (int i=0; i < Nbins6; i++)
        out << "2.5   3  " <<  x[5][i] << "    "  << x[5][i+1] << "     "   <<Spectrum8TeV_YBin6.GetBinContent(i) <<  "     " << Spectrum8TeV_YBin1.GetBinError(i) << endl;
  */


  //Spectrum8TeV_YBin1->SetTitle("FFF");
  //TCanvas *c1 = new TCanvas;
  //Spectrum8TeV_YBin1->Draw();
  

}
