#pragma once

#include "ui_base_item.h"

namespace ui
{
	namespace dropdowns
	{
		template < typename t = int >
		struct dropdown_item_t {
			const char* m_name;
			t			m_value;
		};

		std::vector< dropdown_item_t< > > games = {
			{ xors( "csgo" ), 1 },
			{ xors( "csgo (beta)" ), 3 },
			{ xors( "tf2" ), 2 },
			{ xors( "gmod (beta)" ), 4 }
		};
	}
}