/**
MIT License

Copyright (c) 2018 Michael Scopchanov

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#include "HeaderView.h"

HeaderView::HeaderView(Qt::Orientation orientation, QWidget *parent) :
	QHeaderView(orientation, parent)
{

}

void HeaderView::paintSection(QPainter *painter, const QRect &rect, int /*logicalIndex*/) const
{
//	QHeaderView::paintSection(painter, rect, logicalIndex);

	QStyleOptionButton option;
	option.rect = rect;//QRect(3,10,16,16);
	option.state = QStyle::State_Enabled | QStyle::State_Active;
//	if (isChecked())
//		option.state |= QStyle::State_On;
//	else
		option.state |= QStyle::State_Off;
	style()->drawPrimitive(QStyle::PE_IndicatorCheckBox, &option, painter);
}
