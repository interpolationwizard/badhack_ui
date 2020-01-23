#pragma once
#include "input_system.hpp"

#include "ui_base_item.h"
#include "ui_menu.h"
#include "ui_form.h"
#include "ui_render.h"
#include "ui_checkbox.h"
#include "ui_tab_manager.h"
#include "ui_slider.h"
#include "ui_dropdown.h"
#include "ui_key_picker.h"
#include "ui_button.h"
#include "ui_color_picker.h"
#include "ui_label.h"
#include "ui_text_input.h"
#include "ui_progressbar.h"

extern bool g_in_inject;

namespace ui 
{
	auto menu = std::make_shared< ui::c_menu >( 0, 0, 500, 400, xors( "BankrollMafia" ), "" );

	static void render( ) {
		static bool was_setup = false;
		if( !was_setup ) {
			menu = std::make_shared< ui::c_menu >( 0, 0, 450, 375, xors( "BankrollMafia" ), "" );



			was_setup = true;
		}
		else {
			render_item( menu.get( ) );
		}
	}
}