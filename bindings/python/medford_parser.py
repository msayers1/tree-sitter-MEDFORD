from tree_sitter import Language, Parser

# Path to the .so file for the Medford grammar
MEDFORD_SO_PATH = './bindings/python/medfordparser.so'

medford_lang = Language(MEDFORD_SO_PATH, 'MEDFORD')
parser = Parser()
parser.set_language(medford_lang)

def parse_code(code):
    tree = parser.parse(bytes(code, "utf8"))
    return tree
