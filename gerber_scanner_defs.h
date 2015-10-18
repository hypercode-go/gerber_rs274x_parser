typedef enum {
	D_CMD_TYPE_INTERPOLATE = 1,
	D_CMD_TYPE_MOVE,
	D_CMD_TYPE_FLASH,
	G_CMD_TYPE_LINEAR_INTERP_MODE,
	G_CMD_TYPE_CW_CIRC_INTERP_MODE,
	G_CMD_TYPE_CCW_CIRC_INTERP_MODE,
	G_CMD_TYPE_SINGLE_QUADRANT_MODE,
	G_CMD_TYPE_MULTI_QUADRANT_MODE,
	G_CMD_TYPE_REGION_MODE_ON,
	G_CMD_TYPE_REGION_MODE_OFF,
	APERTURE_NUMBER,
	COMMENT_START,
	COMMENT_STRING,
	END_OF_FILE,
	X_COORDINATE,
	Y_COORDINATE,
	I_OFFSET,
	J_OFFSET,
	X_REPEATS,
	Y_REPEATS,
	X_STEP_DISTANCE,
	Y_STEP_DISTANCE,
	COORD_FORMAT,
	COORD_FORMAT_NUM_INT_POSITIONS,
	COORD_FORMAT_NUM_DEC_POSITIONS,
	UNIT_SPECIFIER,
	END_OF_DATA_BLOCK,
	EXT_CMD_DELIMITER,
	APERTURE_DEFINITION,
	STANDARD_APERTURE_TYPE_CIRCLE,
	STANDARD_APERTURE_TYPE_RECTANGLE,
	STANDARD_APERTURE_TYPE_OBROUND,
	STANDARD_APERTURE_TYPE_POLYGON,
	CUSTOM_APERTURE_NAME,
	APERTURE_DEFINITION_MODIFIER,
	APERTURE_MACRO,
	VARIABLE_DEFINITION,
	ARITHMETIC_ADD,
	ARITHMETIC_SUB,
	ARITHMETIC_MULT,
	ARITHMETIC_DIV,
	ARITHMETIC_LEFT_PAREN,
	ARITHMETIC_RIGHT_PAREN,
	ARITHMETIC_CONSTANT,
	ARITHMETIC_VAR_REFERENCE,
	APERTURE_PRIMITIVE_TYPE_CIRCLE,
	APERTURE_PRIMITIVE_TYPE_VECTOR_LINE,
	APERTURE_PRIMITIVE_TYPE_CENTER_LINE,
	APERTURE_PRIMITIVE_TYPE_OUTLINE,
	APERTURE_PRIMITIVE_TYPE_POLYGON,
	APERTURE_PRIMITIVE_TYPE_MOIRE,
	APERTURE_PRIMITIVE_TYPE_THERMAL,
	APERTURE_PRIMITIVE_MODIFIER_DELIMITER,
	APERTURE_COMMENT_START,
	APERTURE_COMMENT_CONTENT,
	STEP_AND_REPEAT_START,
	LEVEL_POLARITY
} Token;

typedef enum {
	UNIT_TYPE_IN,
	UNIT_TYPE_MM
} UnitType;

typedef enum {
	LEVEL_POLARITY_CLEAR,
	LEVEL_POLARITY_DARK
} LevelPolarity;

/*
typedef union {
	UnitType unit_type;
	LevelPolarity level_polarity;
	int aperture_number;
	char* comment_string;
	char* custom_aperture_name;
	char* aperture_comment;
	int x_coordinate;
	int y_coordinate;
	int i_offset;
	int j_offset;
	int num_int_positions;
	int num_dec_positions;
	double aperture_definition_modifier;
	int variable_definition;
	double arithmetic_constant;
	int arithmetic_var_reference;
	int x_repeats;
	int y_repeats;
	double x_step_distance;
	double y_step_distance;
} YYSTYPE;

typedef struct {
	int first_line;
	int first_column;
	int last_line;
	int last_column;
} YYLTYPE;
*/
