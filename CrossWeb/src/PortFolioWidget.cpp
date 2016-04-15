/*
 * PortFolioWidget.cpp
 *
 *  Created on: 14-Apr-2016
 *      Author: dipanjan
 */

#include <PortFolioWidget.h>

#include <Wt/WApplication>
#include <Wt/WBreak>
#include <Wt/WContainerWidget>
#include <Wt/WLineEdit>
#include <Wt/WPushButton>
#include <Wt/WText>


PortFolioWidget::PortFolioWidget(WContainerWidget *parent, std::vector<PortFolioItem> folio):
			WContainerWidget(parent)
{
	Wt::WTable *table = new Wt::WTable();
	table->setHeaderCount(1);
	table->elementAt(0, 0)->addWidget(new Wt::WText("#"));
	table->elementAt(0, 1)->addWidget(new Wt::WText("Scrip Name"));
	table->elementAt(0, 2)->addWidget(new Wt::WText("Quantity"));
	table->elementAt(0, 3)->addWidget(new Wt::WText("Trade Date"));
	for(int i = 1; i < folio.size(); i++)
	{
		table->elementAt(i, 0)->addWidget(new Wt::WText(std::to_string(folio[i].scrip_name)));
		table->elementAt(i, 1)->addWidget(new Wt::WText(std::to_string(folio[i].quantity)));
		table->elementAt(i, 2)->addWidget(new Wt::WText(std::to_string("3/21/2016")));
	}
	
	// TODO Auto-generated constructor stub

}

PortFolioWidget::~PortFolioWidget() {
	// TODO Auto-generated destructor stub
}
/* namespace IOTPApp */
