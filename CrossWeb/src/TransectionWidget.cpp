/*
 * TransectionWidget.cpp
 *
 *  Created on: 14-Apr-2016
 *      Author: dipanjan
 */

#include <TransectionWidget.h>


TransectionWidget::TransectionWidget(WContainerWidget *parent, std::vector<TransectionItem> history) :
					WContainerWidget(parent)
{
	Wt::WTable *table = new Wt::WTable();
	table->setHeaderCount(1);
	table->elementAt(0, 0)->addWidget(new Wt::WText("#"));
	table->elementAt(0, 1)->addWidget(new Wt::WText("Scrip Name"));
	table->elementAt(0, 2)->addWidget(new Wt::WText("Quantity"));
	table->elementAt(0, 3)->addWidget(new Wt::WText("Price"));
	table->elementAt(0, 4)->addWidget(new Wt::WText("Date"));
	for (int i = 1 ; i < history.size(); i++)
	{
		table->elementAt(i, 0)->addWidget(new Wt::WText(std::to_string(i+1)));
		table->elementAt(i, 1)->addWidget(new Wt::WText(history[i].scrip_name));
		table->elementAt(i, 2)->addWidget(new Wt::WText(std::to_string(history[i].quantity)));
		table->elementAt(i, 3)->addWidget(new Wt::WText(std::to_string(history[i].price)));
	}
	this->addWidget(table);
}

TransectionWidget::~TransectionWidget() {
	// TODO Auto-generated destructor stub
}
/* namespace IOTPApp */
