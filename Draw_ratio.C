{
	ifstream file;
	file.open("ratio.txt");
	TH1F *h1 = new TH1F("h1","Ratio: Oleg/Engin, Rapidity bin y1 : 0-0.5",500,0.80,1.05);
	float d;
	int i=0;
	while (file >> d){
		h1->Fill(d);
		i++;
	}
	TCanvas *c1 = new TCanvas;
	gStyle->SetOptStat(111100);
	h1->Draw();

}


