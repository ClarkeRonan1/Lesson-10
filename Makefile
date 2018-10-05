.PHONY: clean All

All:
	@echo "----------Building project:[ CinBehaviours - Debug ]----------"
	@cd "CinBehaviours" && "$(MAKE)" -f  "CinBehaviours.mk"
clean:
	@echo "----------Cleaning project:[ CinBehaviours - Debug ]----------"
	@cd "CinBehaviours" && "$(MAKE)" -f  "CinBehaviours.mk" clean
