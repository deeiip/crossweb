/*
 * BuySellWidget.cpp
 *
 *  Created on: 14-Apr-2016
 *      Author: dipanjan
 */

#include <BuySellWidget.h>
#include <Wt/WApplication>
#include <Wt/WBreak>
#include <Wt/WContainerWidget>
#include <Wt/WLineEdit>
#include <Wt/WPushButton>
#include <Wt/WText>


BuySellWidget::BuySellWidget(WContainerWidget *parent, std::string scrip, double _ltp) : 
	WContainerWidget(parent)
{
	scrip_name = scrip;
	ltp_ = _ltp;
	Wt::WTable *table = new Wt::WTable();
	table->setHeaderCount(1);
	table->elementAt(0, 0)->addWidget(new Wt::WText("Scrip name"));
	table->elementAt(0, 1)->addWidget(new Wt::WText("Last Traded Price"));
	table->elementAt(1, 0)->addWidget(new Wt::WText(scrip_name));
	table->elementAt(1, 1)->addWidget(new Wt::WText(std::to_string(ltp_)));
	this->addWidget(table);
	this->addWidget(new Wt::WBreak());
	qty_ = new Wt::WLineEdit(this);
	Wt::WPushButton *button_buy = new Wt::WPushButton("Buy", this);
	Wt::WPushButton *button_sell = new Wt::WPushButton("Sell", this);
}

BuySellWidget::~BuySellWidget() {
	// TODO Auto-generated destructor stub
}
/* namespace IOTPApp */
