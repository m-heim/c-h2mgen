#include "token.h"



const char *token_type_name(enum token_type item) {
	if(item == identifier_token) {
		return "identifier_token";
	}	else if(item == assignment_token) {
		return "assignment_token";
	}	else if(item == imm_minus_operator_token) {
		return "imm_minus_operator_token";
	}	else if(item == imm_plus_operator_token) {
		return "imm_plus_operator_token";
	}	else if(item == imm_mul_operator_token) {
		return "imm_mul_operator_token";
	}	else if(item == imm_division_operator_token) {
		return "imm_division_operator_token";
	}	else if(item == selector_token) {
		return "selector_token";
	}	else if(item == semicolon_token) {
		return "semicolon_token";
	}	else if(item == colon_token) {
		return "colon_token";
	}	else if(item == comma_token) {
		return "comma_token";
	}	else if(item == program_directive_token) {
		return "program_directive_token";
	}	else if(item == end_directive_token) {
		return "end_directive_token";
	}	else if(item == module_directive_token) {
		return "module_directive_token";
	}	else if(item == include_directive_token) {
		return "include_directive_token";
	}	else if(item == macro_directive_token) {
		return "macro_directive_token";
	}	else if(item == plus_operator_token) {
		return "plus_operator_token";
	}	else if(item == minus_operator_token) {
		return "minus_operator_token";
	}	else if(item == multiplication_operator_token) {
		return "multiplication_operator_token";
	}	else if(item == division_operator_token) {
		return "division_operator_token";
	}	else if(item == mod_operator_token) {
		return "mod_operator_token";
	}	else if(item == pot_operator_token) {
		return "pot_operator_token";
	}	else if(item == gt_operator_token) {
		return "gt_operator_token";
	}	else if(item == lt_operator_token) {
		return "lt_operator_token";
	}	else if(item == le_operator_token) {
		return "le_operator_token";
	}	else if(item == ge_operator_token) {
		return "ge_operator_token";
	}	else if(item == floor_div_operator_token) {
		return "floor_div_operator_token";
	}	else if(item == increment_operator_token) {
		return "increment_operator_token";
	}	else if(item == not_token) {
		return "not_token";
	}	else if(item == decrement_operator_token) {
		return "decrement_operator_token";
	}	else if(item == opening_bracket_token) {
		return "opening_bracket_token";
	}	else if(item == closing_bracket_token) {
		return "closing_bracket_token";
	}	else if(item == opening_s_bracket_token) {
		return "opening_s_bracket_token";
	}	else if(item == closing_s_bracket_token) {
		return "closing_s_bracket_token";
	}	else if(item == opening_c_bracket_token) {
		return "opening_c_bracket_token";
	}	else if(item == closing_c_bracket_token) {
		return "closing_c_bracket_token";
	}	else if(item == string_literal_token) {
		return "string_literal_token";
	}	else if(item == char_literal_token) {
		return "char_literal_token";
	}	else if(item == int_literal_token) {
		return "int_literal_token";
	}	else if(item == float_literal_token) {
		return "float_literal_token";
	}	else if(item == string_type_token) {
		return "string_type_token";
	}	else if(item == char_type_token) {
		return "char_type_token";
	}	else if(item == int_type_token) {
		return "int_type_token";
	}	else if(item == float_type_token) {
		return "float_type_token";
	}	else if(item == long_type_token) {
		return "long_type_token";
	}	else if(item == return_keyword_token) {
		return "return_keyword_token";
	}	else if(item == continue_keyword_token) {
		return "continue_keyword_token";
	}	else if(item == break_keyword_token) {
		return "break_keyword_token";
	}	else if(item == for_keyword_token) {
		return "for_keyword_token";
	}	else if(item == while_keyword_token) {
		return "while_keyword_token";
	}	else if(item == if_keyword_token) {
		return "if_keyword_token";
	}	else if(item == else_keyword_token) {
		return "else_keyword_token";
	}	else if(item == elif_keyword_token) {
		return "elif_keyword_token";
	}	else if(item == function_token) {
		return "function_token";
	}	else if(item == if_statement_n) {
		return "if_statement_n";
	}	else if(item == return_statement_n) {
		return "return_statement_n";
	}	else if(item == continue_statement_n) {
		return "continue_statement_n";
	}	else if(item == break_statement_n) {
		return "break_statement_n";
	}	else if(item == for_statement_n) {
		return "for_statement_n";
	}	else if(item == expression_n) {
		return "expression_n";
	}	else if(item == factor_n) {
		return "factor_n";
	}	else if(item == term_n) {
		return "term_n";
	}	else if(item == program_n) {
		return "program_n";
	}	else if(item == declaration_n) {
		return "declaration_n";
	}	else if(item == functioncall_n) {
		return "functioncall_n";
	}	else if(item == argument_n) {
		return "argument_n";
	}	else if(item == argument_list_n) {
		return "argument_list_n";
	}	else if(item == block_n) {
		return "block_n";
	}	else if(item == var_n) {
		return "var_n";
	}	else if(item == module_n) {
		return "module_n";
	}	else if(item == secondarydirective_n) {
		return "secondarydirective_n";
	}	else if(item == secondarydirective_list_n) {
		return "secondarydirective_list_n";
	}	else if(item == include_directive_n) {
		return "include_directive_n";
	}	else if(item == include_directive_subselect_n) {
		return "include_directive_subselect_n";
	}	else if(item == program_directive_n) {
		return "program_directive_n";
	}	else if(item == module_directive_n) {
		return "module_directive_n";
	}	else if(item == macro_directive_n) {
		return "macro_directive_n";
	}	else if(item == function_n) {
		return "function_n";
	}	else if(item == functions_n) {
		return "functions_n";
	}	else if(item == unop_n) {
		return "unop_n";
	}	else if(item == binop_n) {
		return "binop_n";
	}	else if(item == parameter_n) {
		return "parameter_n";
	}	else if(item == parameter_list_n) {
		return "parameter_list_n";
	}	else if(item == type_n) {
		return "type_n";
	}	else if(item == statement_n) {
		return "statement_n";
	}	else if(item == jump_statement_n) {
		return "jump_statement_n";
	}	else if(item == expression_statement_n) {
		return "expression_statement_n";
	}	else if(item == simple_expression_n) {
		return "simple_expression_n";
	}	else if(item == function_call_n) {
		return "function_call_n";
	}	 else {
		 return "notdefnd";
	}
}
const char *token_type_class_name(token_type_class item) {
	if(item == unop_c) {
		return "unop_c";
	}	else if(item == binop_c) {
		return "binop_c";
	}	else if(item == assign_c) {
		return "assign_c";
	}	else if(item == sec_directive_c) {
		return "sec_directive_c";
	}	else if(item == prim_directive_c) {
		return "prim_directive_c";
	}	else if(item == literal_c) {
		return "literal_c";
	}	else if(item == type_c) {
		return "type_c";
	}	else if(item == nont_c) {
		return "nont_c";
	}	else if(item == keyword_c) {
		return "keyword_c";
	}	else if(item == nac_c) {
		return "nac_c";
	}	else if(item == bracket_c) {
		return "bracket_c";
	}	else if(item == punctuation_c) {
		return "punctuation_c";
	}	else if(item == directive_c) {
		return "directive_c";
	}	else if(item == relop_c) {
		return "relop_c";
	}	 else {
		 return "notdefnd";
	}
}
