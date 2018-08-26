#ifndef _FLASH_TEXT_ATTRIBUTE_H
#define _FLASH_TEXT_ATTRIBUTE_H

#include "Attributes/StandardAttribute.hh"
#include "Util/ValueWithLocation.hh"

#include <string>

class FlashTextAttribute : public StandardAttribute {
public:
	enum class TextType {
		BARCODE,
		CHARACTERS
	};

	enum class TextOrientation {
		NOT_SET,
		READABLE,
		MIRRORED
	};

	FlashTextAttribute(ValueWithLocation<std::string> name,
					   ValueWithLocation<std::string> text,
					   ValueWithLocation<TextType> text_type);
	virtual ~FlashTextAttribute();

	void set_text_orientation(ValueWithLocation<TextOrientation> text_orientation);
	void set_font_name(ValueWithLocation<std::string> font_name);
	void set_font_size(ValueWithLocation<unsigned int> font_size);
	void set_comments(ValueWithLocation<std::string> comments);
	
private:
	ValueWithLocation<std::string> m_text;
	ValueWithLocation<TextType> m_text_type;
	ValueWithLocation<TextOrientation> m_text_orientation;
	ValueWithLocation<std::string> m_font_name;
	ValueWithLocation<unsigned int> m_font_size;
	ValueWithLocation<std::string> m_comments;
};

#endif // _FLASH_TEXT_ATTRIBUTE_H
