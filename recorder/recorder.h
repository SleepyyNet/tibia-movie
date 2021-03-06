//////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software Foundation,
// Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
//////////////////////////////////////////////////////////////////////

#ifndef __TBMV_RECORDER_H__
#define __TBMV_RECORDER_H__


#include "../common.h"

class Codec;

class Recorder{
public:
	Recorder(const RecordOptions& options);
	~Recorder();

	bool record(unsigned char* const raw, int len);
	const RecordOptions& getOptions() const { return m_options;}

private:
	uint32_t m_startTime;
	Codec* m_codec;
	RecordOptions m_options;
};


#endif
