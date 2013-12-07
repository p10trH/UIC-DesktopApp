void MainWindow::on_listWidget_Athletics_itemClicked(QListWidgetItem *item)
{
    if (item->text().contains("Baseball (Men's)")) {
		ui->webView_Scores->load(QUrl("http://www.uicflames.com/sports/m-basebl/sched/ilch-m-basebl-sched.html"));
        ui->webView_News->load(QUrl("http://www.uicflames.com/sports/m-basebl/ilch-m-basebl-body-main.html"));
    }
    if (item->text().contains("Basketball (Men's)")) {
        ui->webView_Scores->load(QUrl("http://www.uicflames.com/sports/m-baskbl/sched/ilch-m-baskbl-sched.html"));
        ui->webView_News->load(QUrl("http://www.uicflames.com/sports/m-baskbl/ilch-m-baskbl-body.html"));
    }
	if (item->text().contains("Basketball (Women's)")) {
		ui->webView_Scores->load(QUrl("http://www.uicflames.com/sports/w-baskbl/sched/ilch-w-baskbl-sched.html"));
        ui->webView_News->load(QUrl("http://www.uicflames.com/sports/w-baskbl/ilch-w-baskbl-body.html"));
    }
	if (item->text().contains("Field (Men's)")) {
		ui->webView_Scores->load(QUrl("http://www.uicflames.com/sports/m-track/sched/ilch-m-track-sched.html"));
        ui->webView_News->load(QUrl("http://www.uicflames.com/sports/m-track/ilch-m-track-body.html"));
    }
	if (item->text().contains("Field (Women's)")) {
		ui->webView_Scores->load(QUrl("http://www.uicflames.com/sports/w-track/sched/ilch-w-track-sched.html"));
        ui->webView_News->load(QUrl("http://www.uicflames.com/sports/w-track/ilch-w-track-body.html"));
    }
	if (item->text().contains("Golf (Women's)")) {
		ui->webView_Scores->load(QUrl("http://www.uicflames.com/sports/w-golf/sched/ilch-w-golf-sched.html"));
        ui->webView_News->load(QUrl("http://www.uicflames.com/sports/w-golf/ilch-w-golf-body.html"));
    }
	if (item->text().contains("Gymnastics (Men's)")) {
		ui->webView_Scores->load(QUrl("http://www.uicflames.com/sports/m-gym/sched/ilch-m-gym-sched.html"));
        ui->webView_News->load(QUrl("http://www.uicflames.com/sports/m-gym/ilch-m-gym-body.html"));
    }
	if (item->text().contains("Gymnastics (Women's)")) {
		ui->webView_Scores->load(QUrl("http://www.uicflames.com/sports/w-gym/sched/ilch-w-gym-sched.html"));
        ui->webView_News->load(QUrl("http://www.uicflames.com/sports/w-gym/ilch-w-gym-body.html"));
    }
	if (item->text().contains("Soccer (Men's)")) {
		ui->webView_Scores->load(QUrl("http://www.uicflames.com/sports/m-soccer/sched/ilch-m-soccer-sched.html"));
        ui->webView_News->load(QUrl("http://www.uicflames.com/sports/m-soccer/ilch-m-soccer-body.html"));
    }
	if (item->text().contains("Soccer (Women's)")) {
		ui->webView_Scores->load(QUrl("http://www.uicflames.com/sports/w-soccer/sched/ilch-w-soccer-sched.html"));
        ui->webView_News->load(QUrl("http://www.uicflames.com/sports/w-soccer/ilch-w-soccer-body.html"));
    }
	if (item->text().contains("Softball (Women's)")) {
		ui->webView_Scores->load(QUrl("http://www.uicflames.com/sports/w-softbl/sched/ilch-w-softbl-sched.html"));
        ui->webView_News->load(QUrl("http://www.uicflames.com/sports/w-softbl/ilch-w-softbl-body.html"));
    }
	if (item->text().contains("Swimming And Diving (Men's)")) {
		ui->webView_Scores->load(QUrl("http://www.uicflames.com/sports/m-swim/sched/ilch-m-swim-sched.html"));
        ui->webView_News->load(QUrl("http://www.uicflames.com/sports/m-swim/ilch-m-swim-body.html"));
    }
	if (item->text().contains("Swimming And Diving (Women's)")) {
		ui->webView_Scores->load(QUrl("http://www.uicflames.com/sports/w-swim/sched/ilch-w-swim-sched.html"));
        ui->webView_News->load(QUrl("http://www.uicflames.com/sports/w-swim/ilch-w-swim-body.html"));
    }
	if (item->text().contains("Tennis (Men's)")) {
		ui->webView_Scores->load(QUrl("http://www.uicflames.com/sports/m-tennis/sched/ilch-m-tennis-sched.html"));
        ui->webView_News->load(QUrl("http://www.uicflames.com/sports/m-tennis/ilch-m-tennis-body.html"));
    }
	if (item->text().contains("Tennis (Women's)")) {
		ui->webView_Scores->load(QUrl("http://www.uicflames.com/sports/w-tennis/sched/ilch-w-tennis-sched.html"));
        ui->webView_News->load(QUrl("http://www.uicflames.com/sports/w-tennis/ilch-w-tennis-body.html"));
    }
	if (item->text().contains("Volleyball (Women's)")) {
		ui->webView_Scores->load(QUrl("http://www.uicflames.com/sports/w-volley/sched/ilch-w-volley-sched.html"));
        ui->webView_News->load(QUrl("http://www.uicflames.com/sports/w-volley/ilch-w-volley-body.html"));
    }
}