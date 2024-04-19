package tree_sitter_ssh_config_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter-grammars/tree-sitter-ssh_config"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_ssh_config.Language())
	if language == nil {
		t.Errorf("Error loading OpenSSH config grammar")
	}
}
